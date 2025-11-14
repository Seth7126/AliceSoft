// 函数: sub_5d0a80
// 地址: 0x5d0a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_41c
int32_t eax_1 = __security_cookie ^ &var_41c
void* esi = *(arg1 + 8)
struct sys43vm::CIntStack::VTable* const var_418 = &sys43vm::CIntStack::`vftable'
void var_414
void* var_14 = &var_414
_memset(&var_414, 0, 0x400)
sub_69d850(&var_414, esi + 0xe54, (*(esi + 0x1254) - (esi + 0xe50) - 4) & 0xfffffffc)
void* ecx = &var_414 + ((*(esi + 0x1254) - (esi + 0xe50) - 4) s>> 2 << 2)
void* var_14_1 = ecx
int32_t eax_11 = 0
int32_t edx_3 = (ecx - &var_418 - 4) s>> 2

if (edx_3 s> 0)
    do
        if (arg2 == eax_11)
            int32_t result = *(ecx - 4)
            sub_69a5bc(eax_1 ^ &var_41c)
            return result
        
        ecx -= 4
        eax_11 += 1
        void* var_14_2 = ecx
    while (eax_11 s< edx_3)

sub_69a5bc(eax_1 ^ &var_41c)
return 0xffffffff
