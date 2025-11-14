// 函数: sub_600bb0
// 地址: 0x600bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
uint32_t edi = zx.d(arg3.w)
uint32_t ebx_1 = arg3 u>> 0x10
sub_601bb0(arg1 + 0x30, arg2, edi, ebx_1)
int32_t esi_1 = *(arg1 + 0x6c)
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi_1)
*(arg1 + 0x1c) = divs.dp.d(sx.q(edi), (eax_1 - edx) s>> 1)
*(arg1 + 0x28) = divs.dp.d(sx.q(ebx_1), esi_1)
sub_601f40(arg1 + 0x18, arg2)
sub_6020b0(arg1 + 0x24, arg2)
return 0
