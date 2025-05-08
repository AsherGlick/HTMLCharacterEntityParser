import os
import urllib.request
import json
import classnotation
from dataclasses import dataclass, field
from typing import Dict, Any, List, Union, Literal, Optional, Iterable, Callable
import zipfile
import xml.etree.ElementTree as ET

entity_names_url = "https://html.spec.whatwg.org/entities.json"
unicode_data_url = "https://www.unicode.org/Public/UCD/latest/ucdxml/ucd.all.flat.zip"


entity_names_file = "html_entities.json"


def get_html_entities():
    if not os.path.exists(entity_names_file):
        print(f"Downloading {entity_names_file}...")
        with urllib.request.urlopen(entity_names_url) as response:
            data = response.read()
            with open(entity_names_file, 'wb') as f:
                f.write(data)
        print("Download complete.")
    else:
        print("Found HTML Entities")

    with open(entity_names_file) as f:
        return json.load(f)

unicode_data_file = "ucd.zip"
def get_unicode_information() -> ET.Element:
    if not os.path.exists(unicode_data_file):
        print(f"Downloading {unicode_data_file}...")
        with urllib.request.urlopen(unicode_data_url) as response:
            data = response.read()
            with open(unicode_data_file, 'wb') as f:
                f.write(data)
        print("Download Complete")
    else:
        print("Found Unicode Data")

    xml_filename = "ucd.all.flat.xml"
    with zipfile.ZipFile(unicode_data_file, 'r') as zip_file:
        if xml_filename in zip_file.namelist():
            with zip_file.open(xml_filename) as xml_file:
                tree = ET.parse(xml_file)
                return tree.getroot()
        else:
            raise FileNotFoundError(f"{xml_filename} not found in the ZIP archive.")

# @dataclass
# class CharacterData:
#     code_point: str = field(metadata={"json": "cp"})
#     age: Union[
#         Literal["1.1"],
#         Literal["2.0"], Literal["2.1"],
#         Literal["3.0"], Literal["3.1"], Literal["3.2"],
#         Literal["4.0"], Literal["4.1"],
#         Literal["5.0"], Literal["5.1"], Literal["5.2"],
#         Literal["6.0"], Literal["6.1"], Literal["6.2"], Literal["6.3"],
#         Literal["7.0"],
#         Literal["8.0"],
#         Literal["9.0"],
#         Literal["10.0"],
#         Literal["11.0"],
#         Literal["12.0"], Literal["12.1"],
#         Literal["13.0"],
#         Literal["14.0"],
#         Literal["15.0"], Literal["15.1"],
#         Literal["16.0"],
#         Literal["unassigned"],
#     ]

#     character_name: str = field(metadata={"json":"na"})
#     v1_character_name: str = field(metadata={"json": "na1"})


#     JSN=""
#     gc="Lu"
#     ccc="0"
#     dt="can"
#     dm="0041 0302"
#     nt="None"
#     nv="NaN"
#     bc="L"
#     bpt="n"
#     bpb="#"
#     Bidi_M="N"
#     bmg=""
#     suc="#"
#     slc="00E2"
#     stc="#"
#     uc="#"
#     lc="00E2"
#     tc="#"
#     scf="00E2"
#     cf="00E2"
#     jt="U"
#     jg="No_Joining_Group"
#     ea="N"
#     lb="AL"
#     sc="Latn"
#     scx="Latn"
#     Dash="N"
#     WSpace="N"
#     Hyphen="N"
#     QMark="N"
#     Radical="N"
#     Ideo="N"
#     UIdeo="N"
#     IDSB="N"
#     IDST="N"
#     hst="NA"
#     DI="N"
#     ODI="N"
#     Alpha="Y"
#     OAlpha="N"
#     Upper="Y"
#     OUpper="N"
#     Lower="N"
#     OLower="N"
#     Math="N"
#     OMath="N"
#     Hex="N"
#     AHex="N"
#     NChar="N"
#     VS="N"
#     Bidi_C="N"
#     Join_C="N"
#     Gr_Base="Y"
#     Gr_Ext="N"
#     OGr_Ext="N"
#     Gr_Link="N"
#     STerm="N"
#     Ext="N"
#     Term="N"
#     Dia="N"
#     Dep="N"
#     IDS="Y"
#     OIDS="N"
#     XIDS="Y"
#     IDC="Y"
#     OIDC="N"
#     XIDC="Y"
#     SD="N"
#     LOE="N"
#     Pat_WS="N"
#     Pat_Syn="N"
#     GCB="XX"
#     WB="LE"
#     SB="UP"
#     CE="N"
#     Comp_Ex="N"
#     NFC_QC="Y"
#     NFD_QC="N"
#     NFKC_QC="Y"
#     NFKD_QC="N"
#     XO_NFC="N"
#     XO_NFD="Y"
#     XO_NFKC="N"
#     XO_NFKD="Y"
#     FC_NFKC="#"
#     CI="N"
#     Cased="Y"
#     CWCF="Y"
#     CWCM="Y"
#     CWKCF="Y"
#     CWL="Y"
#     CWT="N"
#     CWU="N"
#     NFKC_CF="00E2"
#     InSC="Other"
#     InPC="NA"
#     PCM="N"
#     vo="R"
#     RI="N"
#     blk="Latin_1_Sup"
#     isc=""
#     Emoji="N"
#     EPres="N"
#     EMod="N"
#     EBase="N"
#     EComp="N"
#     ExtPict="N"
#     NFKC_SCF="00E2"
#     ID_Compat_Math_Start="N"
#     ID_Compat_Math_Continue="N"
#     IDSU="N"
#     InCB="None"
#     MCM="N"



# @dataclass
# class UCDData:
#     description: str
#     repertoire: List[CharacterData]
#     blocks: Any
#     named_sequences: Any = field(metadata={"json": "named-sequences"})
#     normalization_corrections: Any = field(metadata={"json": "normalization-corrections"})
#     standardized_variants: Any = field(metadata={"json": "standardized-variants"})
#     cjk_radicals: Any = field(metadata={"json": "cjk-radicals"})
#     emoji_sources: Any = field(metadata={"json": "emoji-sources"})
#     do_not_emit: Any = field(metadata={"json": "do-not-emit"})




# def get_parsed_information():
#     root = get_unicode_information()

#     ucd_fields: Dict[str, Any] = {
#         'description': None,
#         'repertoire': None,
#         'blocks': None,
#         'named-sequences': None,
#         'normalization-corrections': None,
#         'standardized-variants': None,
#         'cjk-radicals': None,
#         'emoji-sources': None,
#         'do-not-emit': None
#     }
#     for i in root:
#         tag = i.tag.split("}")[1]
#         if tag not in ucd_fields or ucd_fields[tag] != None:
#             raise ValueError("Unknown or double Top Level UCD Field")

#         if tag == "description":
#             ucd_fields[tag] = i.text
#         elif tag == "repertoire":
#             ucd_fields[tag] = [parse_char(x) for x in i]
#         elif tag in ("blocks", "named-sequences", "normalization-corrections", "standardized-variants", "cjk-radicals", "emoji-sources", "do-not-emit"):
#             ucd_fields[tag] = [parse_element(x) for x in i]
#         else:
#             raise ValueError("Unimplementfed top level tag parser")

#     return classnotation.load_data(UCDData, ucd_fields)

trimmed_filename = "trimmed_ucd.json"
def get_trimmed_information():

    if not os.path.exists(trimmed_filename):
        root = get_unicode_information()

        trimmed_info = {}
        for child in root:
            child_tag = child.tag.split("}")[1]
            if child_tag == "repertoire":
                for repertoire_child in child:
                    if repertoire_child.tag == "{http://www.unicode.org/ns/2003/ucd/1.0}reserved":
                        continue
                    if repertoire_child.tag == "{http://www.unicode.org/ns/2003/ucd/1.0}surrogate":
                        continue
                    if repertoire_child.tag == "{http://www.unicode.org/ns/2003/ucd/1.0}noncharacter":
                        continue

                    attributes = repertoire_child.attrib
                    if "cp" not in attributes:
                        print(attributes, repertoire_child)
                        continue

                    codepoint = attributes["cp"]
                    name = attributes["na"]

                    if codepoint in trimmed_info:
                        raise ValueError("Double Codepoint" + codepoint)

                    trimmed_info[codepoint] = name
        with open(trimmed_filename, 'w') as f:
            json.dump(trimmed_info, f)
        return trimmed_info
    else:
        print("Found Trimmed Info")
        with open(trimmed_filename, 'r') as f:
            return json.load(f)

# def parse_char(char: ET.Element):
#     # print(char.tag)
#     if char.tag == "{http://www.unicode.org/ns/2003/ucd/1.0}char":
#         data = char.attrib
#         data["base_type"] = "char"
#         return data
#     elif char.tag == "{http://www.unicode.org/ns/2003/ucd/1.0}reserved":
#         data = char.attrib
#         data["base_type"] = "reserved"
#         return data
#     else:
#         raise ValueError("1")

# def parse_element(elem: ET.Element):
#     data = elem.attrib;
#     data["base_type"] = elem.tag.split("}")[1]
#     return data


@dataclass
class HTMLEntity:
    codepoints: List[int]
    characters: str

@dataclass
class Wrapper:
    wrapper: Dict[str, HTMLEntity]



TrieTree = Dict[str, "TrieNode"]

@dataclass
class TrieNode:
    leaf_word: Optional[str] = None
    children: TrieTree = field(default_factory=dict)


def insert_into_trie(string: str, original_string: str, trie: TrieTree):
    if len(string) == 0:
        raise ValueError("Got zero character string")

    character = string[0]
    
    if len(string) == 1:
        if character in trie:
            raise ValueError("Duplicate Trie entries not supported")
        trie[character] = TrieNode(leaf_word=original_string)
        return

    if character not in trie:
        trie[character] = TrieNode()
    insert_into_trie(string[1:], original_string, trie[character].children)










def build_trie_tree(strings: Iterable[str]) -> TrieTree:
    trie_tree: TrieTree = {}
    for string in strings:
        insert_into_trie(string, string, trie_tree)
    return trie_tree


def build_switch_tree(trie: TrieTree, found_function: Callable[[str, str, List[str]], None], indent: str = "") -> str:
    lines = []

    _build_switch_tree(trie, indent, lines, found_function)

    return "\n".join(lines)


def _build_switch_tree(trie: TrieTree, indent: str, lines: List[str], found_function: Callable[[str, str, List[str]], None]):
    if len(trie) == 1:
        build_elided_switch_branch(trie, indent, lines, found_function)
        return lines

    lines.append(indent + "switch (*character) {")
    label_indent = indent + "  ";
    new_indent = indent + "    ";
    for character in sorted(trie.keys()):
        lines.append(f"{label_indent}case '{character}':")


        leaf_word = trie[character].leaf_word
        if leaf_word is not None:
            build_leaf(leaf_word, new_indent, lines, found_function)
        else:
            lines.append(f"{new_indent}++character;")
            _build_switch_tree(trie[character].children, new_indent, lines, found_function)

        lines.append(f"{new_indent}break;")
    lines.append(indent + "}")
    return lines


def build_elided_switch_branch(trie: TrieTree, indent: str, lines: List[str], found_function: Callable[[str, str, List[str]], None]) -> List[str]:
    elidable_characters = []
    leaf_word: Optional[str] = None
    while len(trie) == 1:
        character = next(iter(trie))
        elidable_characters.append(character)
        leaf_word = trie[character].leaf_word
        trie = trie[character].children

    new_indent = indent + "    "

    elidable_string = "".join(elidable_characters)
    if len(elidable_string) > 1:
        lines.append(f"{indent}if (strncmp(character, \"{elidable_string}\", {len(elidable_string)}) == 0) {{")
        lines.append(f"{new_indent}character += {len(elidable_string)};")
    elif len(elidable_string) == 1:
        lines.append(indent + f"if (*character == '{elidable_string}') {{")
        lines.append(f"{new_indent}++character;")
    else:
        raise ValueError("Got a 0 length elidable string")

    if leaf_word is not None:
        build_leaf(leaf_word, new_indent, lines, found_function)
    else:
        _build_switch_tree(trie, new_indent, lines, found_function)

    lines.append(indent + "}")

    return lines

def build_leaf(word: str, indent: str, lines: List[str], found_function: Callable[[str, str, List[str]], None]):
    lines.append(f"{indent}// Found word \"{word}\"")
    found_function(word, indent, lines)


entity_filter: Optional[List[str]] = None

# entity_filter = [
#     "&quot;",
#     "&apos;",
#     "&amp;",
#     "&gt;",
#     "&lt;",
#     "&frasl;",
# ]

def main():
    html_entities = get_html_entities()
    unicode_data = get_trimmed_information()

    data = classnotation.load_data(Wrapper, {"wrapper": html_entities}).wrapper

    if entity_filter is not None:
        data = {k: v for k, v in data.items() if k in entity_filter}

    delta_lengths = {}
    replace_values = {}


    for entity, value in data.items():
        if len(value.characters) != len(value.codepoints):
            raise ValueError(f"Character string length and codepoint length are not equal for {entity}")

        # if len(value.characters) > 1 or len(value.codepoints) > 1:
        #     print(entity, value)

        hex_bytes = [f"{b:02x}" for b in value.characters.encode("utf-8")]

        # if len(hex_bytes) > len(entity):
        #     print("We have a problem", entity, hex_bytes);

        delta_lengths[entity] = len(hex_bytes) - len(entity)
        replace_values[entity] = hex_bytes

        # print(hex_bytes, len(value.codepoints))

    trie = build_trie_tree(data.keys())
    

    def delta_length(word: str, indent: str, lines: List[str]):
        delta_length = delta_lengths[word]
        lines.append(f"{indent}length += {delta_length};")

    def replace_buffers(word: str, indent: str, lines: List[str]):
        hex_characters = replace_values[word]
        lines.append(f"{indent}// Copy the string up to the start of the token")
        lines.append(f"{indent}copy_size = substitute_start - input_copy_start;")
        lines.append(f"{indent}memcpy(output_copy_start, input_copy_start, copy_size);")
        lines.append(f"{indent}output_copy_start += copy_size;")
        lines.append(f"{indent}input_copy_start = character;")
        for i, hex_character in enumerate(hex_characters):
            lines.append(f"{indent}output_copy_start[{i}] = 0x{hex_character};")
        lines.append(f"{indent}output_copy_start += {len(hex_characters)};")


    with open("output.c", "w") as f:
        f.write("\n".join([
            "#include <stdint.h>",
            "#include <string.h>",
            "#include <stdlib.h>"
            "",
            "size_t get_new_buffer_size(char* input_string) {",
            "    char* character = input_string;",
            "    int length = 0;",
            "    while(1) {",
            build_switch_tree(trie, delta_length, "        "),
            "        else if (*character == 0x00) {",
            "            return character-input_string + length;",
            "        }",
            "        else {",
            "             ++character;",
            "        }",
            "     }",
            "}",
            "char* replace_html_escape_codes(char* input_string) {",
            "    size_t buffer_size = get_new_buffer_size(input_string);",
            "    char* output = malloc(buffer_size + 1);",
            "    // Null terminate the string.",
            "    output[buffer_size-2] = 0x00;",
            "    char* character = input_string;",
            "    char* substitute_start = character;",
            "    char* input_copy_start = character;",
            "    char* output_copy_start = output;",
            "    size_t copy_size;",
            "    while(1) {",
            "        substitute_start = character;",
            build_switch_tree(trie, replace_buffers, "        "),
            "        else if (*character == 0x00) {",
            "            copy_size = character - input_copy_start;",
            "            memcpy(output_copy_start, input_copy_start, copy_size);",
            "            break;",
            "        }",
            "        else {",
            "             ++character;",
            "        }",
            "     }",
            "    return output;",
            "}",

        ]));


if __name__ == "__main__":
    main()
