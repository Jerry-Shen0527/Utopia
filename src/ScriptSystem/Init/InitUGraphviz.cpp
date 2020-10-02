#include "InitUGraphviz.h"

#include "details/UGraphviz_AutoRefl/UGraphviz_AutoRefl.h"

void Ubpa::Utopia::detail::InitUGraphviz(lua_State* L) {
	ULuaPP::Register<UGraphviz::Graph>(L);
	ULuaPP::Register<UGraphviz::Registry>(L);
	ULuaPP::Register<UGraphviz::Subgraph>(L);
}
