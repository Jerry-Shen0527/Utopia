// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::FillMode> :
    TypeInfoBase<Ubpa::Utopia::FillMode>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[23] = "Ubpa::Utopia::FillMode";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("WIREFRAME"), Type::WIREFRAME},
        Field {TSTR("SOLID"), Type::SOLID},
    };
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::CullMode> :
    TypeInfoBase<Ubpa::Utopia::CullMode>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[23] = "Ubpa::Utopia::CullMode";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("NONE"), Type::NONE},
        Field {TSTR("FRONT"), Type::FRONT},
        Field {TSTR("BACK"), Type::BACK},
    };
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::CompareFunc> :
    TypeInfoBase<Ubpa::Utopia::CompareFunc>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[26] = "Ubpa::Utopia::CompareFunc";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("NEVER"), Type::NEVER},
        Field {TSTR("LESS"), Type::LESS},
        Field {TSTR("EQUAL"), Type::EQUAL},
        Field {TSTR("LESS_EQUAL"), Type::LESS_EQUAL},
        Field {TSTR("GREATER"), Type::GREATER},
        Field {TSTR("NOT_EQUAL"), Type::NOT_EQUAL},
        Field {TSTR("GREATER_EQUAL"), Type::GREATER_EQUAL},
        Field {TSTR("ALWAYS"), Type::ALWAYS},
    };
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::Blend> :
    TypeInfoBase<Ubpa::Utopia::Blend>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[20] = "Ubpa::Utopia::Blend";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("ZERO"), Type::ZERO},
        Field {TSTR("ONE"), Type::ONE},
        Field {TSTR("SRC_COLOR"), Type::SRC_COLOR},
        Field {TSTR("INV_SRC_COLOR"), Type::INV_SRC_COLOR},
        Field {TSTR("SRC_ALPHA"), Type::SRC_ALPHA},
        Field {TSTR("INV_SRC_ALPHA"), Type::INV_SRC_ALPHA},
        Field {TSTR("DEST_ALPHA"), Type::DEST_ALPHA},
        Field {TSTR("INV_DEST_ALPHA"), Type::INV_DEST_ALPHA},
        Field {TSTR("DEST_COLOR"), Type::DEST_COLOR},
        Field {TSTR("INV_DEST_COLOR"), Type::INV_DEST_COLOR},
        Field {TSTR("SRC_ALPHA_SAT"), Type::SRC_ALPHA_SAT},
        Field {TSTR("BLEND_FACTOR"), Type::BLEND_FACTOR},
        Field {TSTR("INV_BLEND_FACTOR"), Type::INV_BLEND_FACTOR},
        Field {TSTR("SRC1_COLOR"), Type::SRC1_COLOR},
        Field {TSTR("INV_SRC1_COLOR"), Type::INV_SRC1_COLOR},
        Field {TSTR("SRC1_ALPHA"), Type::SRC1_ALPHA},
        Field {TSTR("INV_SRC1_ALPHA"), Type::INV_SRC1_ALPHA},
    };
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::BlendOp> :
    TypeInfoBase<Ubpa::Utopia::BlendOp>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[22] = "Ubpa::Utopia::BlendOp";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("ADD"), Type::ADD},
        Field {TSTR("SUBTRACT"), Type::SUBTRACT},
        Field {TSTR("REV_SUBTRACT"), Type::REV_SUBTRACT},
        Field {TSTR("MIN"), Type::MIN},
        Field {TSTR("MAX"), Type::MAX},
    };
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::BlendState> :
    TypeInfoBase<Ubpa::Utopia::BlendState>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[25] = "Ubpa::Utopia::BlendState";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("enable"), &Type::enable, AttrList {
            Attr {TSTR(UMeta::initializer), []()->bool { return { false }; }},
        }},
        Field {TSTR("src"), &Type::src, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::Blend { return { Utopia::Blend::SRC_ALPHA }; }},
        }},
        Field {TSTR("dest"), &Type::dest, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::Blend { return { Utopia::Blend::INV_SRC_ALPHA }; }},
        }},
        Field {TSTR("op"), &Type::op, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::BlendOp { return { Utopia::BlendOp::ADD }; }},
        }},
        Field {TSTR("srcAlpha"), &Type::srcAlpha, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::Blend { return { Utopia::Blend::ONE }; }},
        }},
        Field {TSTR("destAlpha"), &Type::destAlpha, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::Blend { return { Utopia::Blend::INV_SRC_ALPHA }; }},
        }},
        Field {TSTR("opAlpha"), &Type::opAlpha, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::BlendOp { return { Utopia::BlendOp::ADD }; }},
        }},
    };
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::StencilOp> :
    TypeInfoBase<Ubpa::Utopia::StencilOp>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[24] = "Ubpa::Utopia::StencilOp";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("KEEP"), Type::KEEP},
        Field {TSTR("ZERO"), Type::ZERO},
        Field {TSTR("REPLACE"), Type::REPLACE},
        Field {TSTR("INCR_SAT"), Type::INCR_SAT},
        Field {TSTR("DECR_SAT"), Type::DECR_SAT},
        Field {TSTR("INVERT"), Type::INVERT},
        Field {TSTR("INCR"), Type::INCR},
        Field {TSTR("DECR"), Type::DECR},
    };
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::StencilState> :
    TypeInfoBase<Ubpa::Utopia::StencilState>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[27] = "Ubpa::Utopia::StencilState";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("enable"), &Type::enable, AttrList {
            Attr {TSTR(UMeta::initializer), []()->bool { return { false }; }},
        }},
        Field {TSTR("ref"), &Type::ref, AttrList {
            Attr {TSTR(UMeta::initializer), []()->uint8_t { return { 0 }; }},
        }},
        Field {TSTR("readMask"), &Type::readMask, AttrList {
            Attr {TSTR(UMeta::initializer), []()->uint8_t { return { 0xff }; }},
        }},
        Field {TSTR("writeMask"), &Type::writeMask, AttrList {
            Attr {TSTR(UMeta::initializer), []()->uint8_t { return { 0xff }; }},
        }},
        Field {TSTR("failOp"), &Type::failOp, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::StencilOp { return { Utopia::StencilOp::KEEP }; }},
        }},
        Field {TSTR("depthFailOp"), &Type::depthFailOp, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::StencilOp { return { Utopia::StencilOp::KEEP }; }},
        }},
        Field {TSTR("passOp"), &Type::passOp, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::StencilOp { return { Utopia::StencilOp::KEEP }; }},
        }},
        Field {TSTR("func"), &Type::func, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::CompareFunc { return { Utopia::CompareFunc::ALWAYS }; }},
        }},
    };
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::RenderState> :
    TypeInfoBase<Ubpa::Utopia::RenderState>
{
#ifdef UBPA_USREFL_NOT_USE_NAMEOF
    static constexpr char name[26] = "Ubpa::Utopia::RenderState";
#endif
    static constexpr AttrList attrs = {};
    static constexpr FieldList fields = {
        Field {TSTR("fillMode"), &Type::fillMode, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::FillMode { return { Utopia::FillMode::SOLID }; }},
        }},
        Field {TSTR("cullMode"), &Type::cullMode, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::CullMode { return { Utopia::CullMode::BACK }; }},
        }},
        Field {TSTR("zTest"), &Type::zTest, AttrList {
            Attr {TSTR(UMeta::initializer), []()->Utopia::CompareFunc { return { Utopia::CompareFunc::LESS }; }},
        }},
        Field {TSTR("zWrite"), &Type::zWrite, AttrList {
            Attr {TSTR(UMeta::initializer), []()->bool { return { true }; }},
        }},
        Field {TSTR("stencilState"), &Type::stencilState},
        Field {TSTR("blendStates"), &Type::blendStates},
        Field {TSTR("colorMask"), &Type::colorMask, AttrList {
            Attr {TSTR(UMeta::initializer), []() {
                static const uint8_t value[8]{ 0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f };
                return value;
            }},
        }},
    };
};

