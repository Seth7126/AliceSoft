// 函数: sub_5d09e0
// 地址: 0x5d09e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_41c
int32_t eax_1 = __security_cookie ^ &var_41c
void* esi = *(arg1 + 8)
struct sys43vm::CIntStack::VTable* const var_418 = &sys43vm::CIntStack::`vftable'
void var_414
void* var_14 = &var_414
_memset(&var_414, 0, 0x400)
sub_69d850(&var_414, esi + 0xe54, (*(esi + 0x1254) - (esi + 0xe50) - 4) & 0xfffffffc)
int32_t result =
    (&var_414 + ((*(esi + 0x1254) - (esi + 0xe50) - 4) s>> 2 << 2) - &var_418 - 4) s>> 2
sub_69a5bc(eax_1 ^ &var_41c)
return result
