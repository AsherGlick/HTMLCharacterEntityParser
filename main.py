import os
import urllib.request
import json
import classnotation
from dataclasses import dataclass, field
from typing import Dict, Any, List, Union, Literal, Optional, Iterable, Callable, Set
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

    _build_switch_tree(trie, indent, lines, found_function, None, 0)

    return "\n".join(lines)


def _build_switch_tree(trie: TrieTree, indent: str, lines: List[str], found_function: Callable[[str, str, List[str]], None], leaf_word: Optional[str], character_index: int):
    if len(trie) == 1:
        build_elided_switch_branch(trie, indent, lines, found_function, leaf_word, character_index)
        return lines

    lines.append(f"{indent}switch (character[{character_index}]) {{")
    label_indent = indent + "    ";
    new_indent = indent + "        ";
    for character in sorted(trie.keys()):
        lines.append(f"{label_indent}case '{character}':")


        inner_leaf_word = trie[character].leaf_word

        if inner_leaf_word is None:
            inner_leaf_word = leaf_word

        if len(trie[character].children) == 0:
            if inner_leaf_word is None:
                raise ValueError("No children and no leaf word")
            # lines.append(f"{new_indent}++character;")

            build_leaf(inner_leaf_word, new_indent, lines, found_function)
        else:
            # lines.append(f"{new_indent}++character;")
            _build_switch_tree(trie[character].children, new_indent, lines, found_function, inner_leaf_word, character_index + 1)

        lines.append(f"{new_indent}break;")
    
    if leaf_word is not None:
        lines.append(f"{label_indent}default:")
        # lines.append(new_indent + "// Dont update the character position. No new characters were matched for this leaf.")
        build_leaf(leaf_word, new_indent, lines, found_function)

    lines.append(indent + "}")
    return lines


def build_elided_switch_branch(trie: TrieTree, indent: str, lines: List[str], found_function: Callable[[str, str, List[str]], None], leaf_word: Optional[str], character_index: int) -> List[str]:
    elidable_characters = []
    inner_leaf_word: Optional[str] = None

    while len(trie) == 1 and inner_leaf_word is None:
        character = next(iter(trie))
        elidable_characters.append(character)
        inner_leaf_word = trie[character].leaf_word
        trie = trie[character].children

    if inner_leaf_word is None:
        inner_leaf_word = leaf_word

    new_indent = indent + "    "

    elidable_string = "".join(elidable_characters)
    if len(elidable_string) > 1:
        lines.append(f"{indent}if (strncmp(character + {character_index}, \"{elidable_string}\", {len(elidable_string)}) == 0) {{")
        # lines.append(f"{new_indent}character += {len(elidable_string)};")

    elif len(elidable_string) == 1:
        lines.append(indent + f"if (character[{character_index}] == '{elidable_string}') {{")
        # lines.append(f"{new_indent}++character;")
    else:
        raise ValueError("Got a 0 length elidable string")

    if len(trie) == 0:
        if inner_leaf_word is None:
            raise ValueError("No children and no leaf word")
        
        build_leaf(inner_leaf_word, new_indent, lines, found_function)
    else:
        _build_switch_tree(trie, new_indent, lines, found_function, inner_leaf_word, character_index + len(elidable_string))


    if leaf_word is not None:
        lines.append(indent + "}")
        lines.append(indent + "else {")

         # Extending a hack for how we insert the comments into the leaf nodes
        lines.append(new_indent + "// Dont update the character position. No new characters were matched for this leaf.")

        build_leaf(leaf_word, new_indent, lines, found_function)


    lines.append(indent + "}")

    return lines

def build_leaf(word: str, indent: str, lines: List[str], found_function: Callable[[str, str, List[str]], None]):
    lines.append(f"{indent}character += {len(word)-1};")
    found_function(word, indent, lines)




def build_character_entity_parser(name: str, character_entity_filter: Optional[Set[str]]):
    headerfile_name = f"replace_{name}_character_entities.h"
    classfile_name = f"replace_{name}_character_entities.c"
    html_entities = get_html_entities()
    unicode_data = get_trimmed_information()

    def get_uncode_name(word: str) -> str:
        codepoints:List[int] = html_entities[word]["codepoints"]
        output = ""
        for codepoint in codepoints:
            output += unicode_data[hex(codepoint)[2:].zfill(4).upper()]
        return output

    data = classnotation.load_data(Wrapper, {"wrapper": html_entities}).wrapper

    if character_entity_filter is not None:
        data = {k: v for k, v in data.items() if k in character_entity_filter}

        # Sanity Check
        filtered_entites = set(data.keys())
        if len(character_entity_filter - filtered_entites) > 0:
            print("Not all filtered character entities were known character entities.")
            print("  ", character_entity_filter - filtered_entites)

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
        unicode_name = get_uncode_name(word)
        characters = data[word].characters
        if characters == "\n":
            characters = "\\n"
        lines.insert(-1, f"{indent}// Character Entity: \"{word}\" Char: \"{characters}\"")
        lines.insert(-1, f"{indent}// Name: {unicode_name}")
        delta_length = delta_lengths[word]
        lines.append(f"{indent}length += {delta_length};")

    def replace_buffers(word: str, indent: str, lines: List[str]):
        unicode_name = get_uncode_name(word)
        characters = data[word].characters
        if characters == "\n":
            characters = "\\n"
        lines.insert(-1, f"{indent}// Character Entity: \"{word}\" Char: \"{characters}\"")
        lines.insert(-1, f"{indent}// Name: {unicode_name}")
        lines.append("")
        lines.append(f"{indent}// Copy the string up to the start of the token")
        lines.append(f"{indent}copy_size = substitute_start - input_copy_start;")
        lines.append(f"{indent}memcpy(output_copy_start, input_copy_start, copy_size);")
        lines.append(f"{indent}output_copy_start += copy_size;")

        hex_characters = replace_values[word]
        strhexbytes = "".join(["\\x"+x for x in hex_characters])
        lines.append(f"{indent}memcpy(output_copy_start, \"{strhexbytes}\", {len(hex_characters)});")
        lines.append(f"{indent}output_copy_start += {len(hex_characters)};")
        lines.append(f"{indent}input_copy_start = character + 1;")

    output_indexes: Dict[str, int] = {}
    def return_index(word: str, indent: str, lines: List[str]):
        nonlocal output_indexes
        hex_characters = "".join(replace_values[word])
        if word not in output_indexes:
            new_index = len(output_indexes)
            output_indexes[word] = new_index
        lines.append(f"{indent}return {output_indexes[word]};")

    with open(classfile_name, "w") as f:
        f.write("\n".join([
            "#include <stdint.h>",
            "#include <stdlib.h>",
            "#include <string.h>",
            "",
            f"size_t get_size_for_replacing_{name}_character_entities(const char* input_string) {{",
            "    const char* character = input_string;",
            "    int length = 0;",
            "    while (1) {",
            build_switch_tree(trie, delta_length, "        "),
            "        else if (*character == 0x00) {",
            "            return character - input_string + length;",
            "        }",
            "        ++character;",
            "    }",
            "}",
            "",
            f"char* replace_{name}_character_entities(const char* input_string) {{",
            f"    size_t buffer_size = get_size_for_replacing_{name}_character_entities(input_string);",
            "    char* output = malloc(buffer_size + 1);",
            "    // Null terminate the string.",
            "    output[buffer_size] = 0x00;",
            "    const char* character = input_string;",
            "    const char* substitute_start = character;",
            "    const char* input_copy_start = character;",
            "    char* output_copy_start = output;",
            "    size_t copy_size;",
            "    while (1) {",
            "        substitute_start = character;",
            build_switch_tree(trie, replace_buffers, "        "),
            "        else if (*character == 0x00) {",
            "            copy_size = character - input_copy_start;",
            "            memcpy(output_copy_start, input_copy_start, copy_size);",
            "            break;",
            "        }",
            "        ++character;",
            "    }",
            "    return output;",
            "}",
            "",
            # "",
            # "size_t get_prefix(char* input_string) {",
            # "    char* character = input_string;",
            # build_switch_tree(trie, return_index, "    "),
            # "}",
            # "",
        ]));

    with open(headerfile_name, "w") as f:
        f.write("\n".join([
            "#include <stddef.h>",
            "",
            f"size_t get_size_for_replacing_{name}_character_entities(const char* input_string);",
            f"char* replace_{name}_character_entities(const char* input_string);",
            "",
        ]))




def main():
    preset_entity_filters = {
        # Include all of the character entities
        "all": None,

        # # Include "common" entities. Determined by a quick google for "common
        # html character entities" and clicking on the first link.
        "common": set([
            "&ge;", "&phi;", "&Iota;", "&cedil;", "&Prime;", "&Scaron;",
            "&gt;", "&piv;", "&iota;", "&acute;", "&rsquo;", "&scaron;",
            "&le;", "&psi;", "&isin;", "&Alpha;", "&sbquo;", "&sigmaf;",
            "&lt;", "&Psi;", "&larr;", "&alpha;", "&Sigma;", "&spades;",
            "&Mu;", "&reg;", "&macr;", "&Kappa;", "&sigma;", "&there4;",
            "&mu;", "&Rho;", "&nbsp;", "&kappa;", "&Theta;", "&thinsp;",
            "&ne;", "&rho;", "&nsub;", "&laquo;", "&theta;", "&frac14;",
            "&ni;", "&rlm;", "&ordf;", "&lceil;", "&tilde;", "&frac34;",
            "&Nu;", "&shy;", "&ordm;", "&ldquo;", "&times;", "&brvbar;",
            "&nu;", "&sim;", "&para;", "&lsquo;", "&trade;", "&curren;",
            "&or;", "&sub;", "&part;", "&mdash;", "&upsih;", "&dagger;",
            "&Pi;", "&sum;", "&perp;", "&micro;", "&asymp;", "&hearts;",
            "&pi;", "&sup;", "&prod;", "&minus;", "&Delta;", "&hellip;",
            "&Xi;", "&tau;", "&prop;", "&nabla;", "&delta;", "&Lambda;",
            "&xi;", "&Tau;", "&rarr;", "&ndash;", "&exist;", "&lambda;",
            "&amp;", "&uml;", "&sdot;", "&OElig;", "&Gamma;", "&lfloor;",
            "&and;", "&yen;", "&sect;", "&oelig;", "&gamma;", "&lowast;",
            "&ang;", "&zwj;", "&sube;", "&oline;", "&diams;", "&Dagger;",
            "&cap;", "&Beta;", "&sup1;", "&Omega;", "&equiv;", "&divide;",
            "&Chi;", "&beta;", "&sup2;", "&omega;", "&empty;", "&Epsilon;",
            "&chi;", "&cong;", "&sup3;", "&pound;", "&bdquo;", "&epsilon;",
            "&cup;", "&darr;", "&supe;", "&prime;", "&forall;", "&Upsilon;",
            "&deg;", "&copy;", "&uarr;", "&radic;", "&frac12;", "&upsilon;",
            "&eta;", "&euro;", "&Yuml;", "&raquo;", "&iquest;", "&Omicron;",
            "&Eta;", "&emsp;", "&Zeta;", "&iexcl;", "&lsaquo;", "&omicron;",
            "&int;", "&ensp;", "&zeta;", "&infin;", "&otimes;", "&thetasym;",
            "&loz;", "&fnof;", "&zwnj;", "&notin;", "&permil;",
            "&lrm;", "&bull;", "&circ;", "&oplus;", "&plusmn;",
            "&not;", "&cent;", "&clubs;", "&rceil;", "&rsaquo;",
            "&Phi;", "&harr;", "&crarr;", "&rdquo;", "&rfloor;",
        ]),

        # Include only a "limited" set of character entities based on escaping
        # special characters in the HTML/XML spec.
        "limited": set(["&quot;","&apos;","&amp;","&gt;","&lt;"]),
    }

    for name, filterset in preset_entity_filters.items():
        build_character_entity_parser(name, filterset)


if __name__ == "__main__":
    main()
