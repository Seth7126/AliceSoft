// 函数: sub_5858b0
// 地址: 0x5858b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
int32_t var_c_1 = 0
__Smtx_lock_shared(arg1 + 0x200)
int32_t esi = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)

if (esi == 0)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = esi
    *arg2 = 0
    return arg2

__Smtx_lock_shared(arg1 + 0x200)
void* edi_1 = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)
sub_5bbaa0(edi_1, arg2)
return arg2
