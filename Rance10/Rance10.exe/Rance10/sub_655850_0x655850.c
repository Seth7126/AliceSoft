// 函数: sub_655850
// 地址: 0x655850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1[6]
int32_t ebp_1 = esi[9] * 2
int32_t var_14 = ebp_1
char* eax = sub_705e22()

if (eax == 0)
    *(*arg1 + 0x14) = 0x38
    *(*arg1 + 0x18) = 0xa
    (**arg1)(arg1)

sub_700660(eax, esi[8], esi[9])
int32_t eax_3 = esi[7]

if (eax_3 != 0)
    _free(eax_3)

void* ecx_3 = esi[9]
esi[7] = eax
esi[8] = eax
esi[9] = ebp_1
*esi = ecx_3 + eax
void* result
result.b = 1
esi[1] = ecx_3
return result
