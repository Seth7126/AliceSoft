// 函数: sub_5dcf50
// 地址: 0x5dcf50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg2
(*(*esi + 0xc8))(0)
(*(*esi + 0xcc))(0)
(*(*esi + 0xc0))(0)
int32_t xmm3 = (zx.o(0)).d

if ((*(arg7 + 0x194) - *(arg7 + 0x190)) s>> 2 u> 3)
    arg2 = *(*(arg7 + 0x190) + 0xc)
else
    arg2 = nullptr

int32_t xmm7

if ((*(arg7 + 0x194) - *(arg7 + 0x190)) s>> 2 u> 4)
    xmm7 = *(*(arg7 + 0x190) + 0x10)
else
    xmm7 = (zx.o(0)).d

int32_t xmm6

if ((*(arg7 + 0x194) - *(arg7 + 0x190)) s>> 2 u> 5)
    xmm6 = *(*(arg7 + 0x190) + 0x14)
else
    xmm6 = (zx.o(0)).d

int32_t xmm5

if ((*(arg7 + 0x194) - *(arg7 + 0x190)) s>> 2 u> 6)
    xmm5 = *(*(arg7 + 0x190) + 0x18)
else
    xmm5 = (zx.o(0)).d

int32_t xmm4

if ((*(arg7 + 0x194) - *(arg7 + 0x190)) s>> 2 u> 7)
    xmm4 = *(*(arg7 + 0x190) + 0x1c)
else
    xmm4 = (zx.o(0)).d

if ((*(arg7 + 0x194) - *(arg7 + 0x190)) s>> 2 u> 8)
    xmm3 = *(*(arg7 + 0x190) + 0x20)

char result = (*(*esi + 0xe4))(*(arg6 + 0x40), *(arg6 + 0x44), *(arg6 + 0x50), *(arg6 + 0x48), 
    *(arg6 + 0x4c), arg2, xmm7, xmm6, xmm5, xmm4, xmm3, arg4, arg5)

if (result == 0)
    return result

if (sub_5ca770(arg1 + 0x38) != 0 && (*(*arg3 + 0x2c))(0, 0, 0, 1) != 0
        && sub_5dcb50(arg1 + 0x10) != 0 && sub_5ca7c0(arg1 + 0x38) != 0 && (*(*esi + 0xec))() != 0)
    return sub_56a720(arg1 + 0x54, esi, sub_5ca8c0(arg1 + 0x38), arg4, arg5) != 0

return false
