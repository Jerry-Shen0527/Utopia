// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::AccessMode> :
    TypeInfoBase<Ubpa::UECS::AccessMode>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[23] = "Ubpa::UECS::AccessMode";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("LAST_FRAME"), Type::LAST_FRAME},
        Field {TSTR("WRITE"), Type::WRITE},
        Field {TSTR("LATEST"), Type::LATEST},
    };
};

