// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UGraphviz::Graph> :
    TypeInfoBase<Ubpa::UGraphviz::Graph, Base<UGraphviz::Subgraph>>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[23] = "Ubpa::UGraphviz::Graph";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR(UMeta::constructor), WrapConstructor<Type(std::string, bool)>(), AttrList {
            Attr {TSTR(UMeta::default_functions), std::tuple {
                WrapConstructor<Type(std::string)>()
            }},
        }},
        Field {TSTR(UMeta::destructor), WrapDestructor<Type>()},
        Field {TSTR(UMeta::constructor), WrapConstructor<Type(UGraphviz::Graph&&)>()},
        Field {TSTR("Dump"), &Type::Dump},
        Field {TSTR("IsDigraph"), &Type::IsDigraph},
    };
};

