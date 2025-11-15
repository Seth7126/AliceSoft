// 函数: sub_597960
// 地址: 0x597960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = sub_6cab20(arg3)
int32_t var_4 = 0xff
int32_t ebx_1 = eax & 0xffffff
int32_t* eax_1 = &arg3
int32_t edx = int.d(arg2 * 255f)
arg3 = edx

if (edx s>= 0xff)
    eax_1 = &var_4

int32_t edi = 0
int32_t eax_2 = *eax_1

if (eax_2 s> 0)
    edi = eax_2

int32_t esi_1 = *(*(arg1 + 0x64) + (*(arg1 + 0x7c) << 3))
arg3 = esi_1
__Smtx_lock_shared(esi_1 + 4)
int32_t esi_2 = *esi_1
__Smtx_unlock_shared(esi_1 + 4)

if (esi_2 != 0)
    __Smtx_lock_shared(esi_1 + 4)
    int32_t* esi_4 = *arg3
    __Smtx_unlock_shared(esi_1 + 4)
    
    if ((*(*esi_4 + 0x28))() != 0)
        return edi << 0x18 | ebx_1

if (ebx_1 == 0xffffff)
    return ((edi << 8 | edi) << 8 | edi) << 8 | edi

if (edi != 0xff)
    return (((zx.d((ebx_1 u>> 8).b) * edi) | (((ebx_1 u>> 8 & 0xffff00) * edi) & 0xffff00ff))
        & 0xffffff00) | (zx.d(ebx_1.b) * edi) u>> 8 | edi << 0x18

return ebx_1 | 0xff000000
