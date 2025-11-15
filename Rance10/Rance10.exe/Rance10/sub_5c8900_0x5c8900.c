// 函数: sub_5c8900
// 地址: 0x5c8900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0x12b].b == 0)
    int32_t result
    result.b = 1
    return result

void* ecx = *arg1
int32_t xmm0 = (zx.o(0)).d
float var_4 = 0f
int32_t xmm1

if ((*(ecx + 0x194) - *(ecx + 0x190)) s>> 2 != 0)
    xmm1 = **(ecx + 0x190)
else
    xmm1 = (zx.o(0)).d

if ((*(ecx + 0x194) - *(ecx + 0x190)) s>> 2 u> 1)
    xmm0 = *(*(ecx + 0x190) + 4)

if ((*(ecx + 0x194) - *(ecx + 0x190)) s>> 2 u> 2)
    var_4 = *(*(ecx + 0x190) + 8)

int32_t eax_12
int16_t x87control
int16_t x87control_1
int80_t st0
st0, eax_12, x87control_1 = sub_721fd0(x87control, xmm1 f* 255f)
int32_t eax_13
int16_t x87control_2
int80_t st0_1
st0_1, eax_13, x87control_2 = sub_721fd0(x87control_1, xmm0 f* 255f)
int32_t eax_14
int80_t st0_2
st0_2, eax_14 = sub_721fd0(x87control_2, var_4 * 255f)
__Smtx_lock_shared(&arg1[2])
int32_t* edi = arg1[1]
__Smtx_unlock_shared(&arg1[2])
return sub_5dd150(&arg1[0x12c], edi, (eax_12 << 8 | eax_13) << 8 | eax_14, arg2) != 0
