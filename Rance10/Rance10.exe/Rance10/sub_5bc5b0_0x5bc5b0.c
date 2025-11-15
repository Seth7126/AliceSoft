// 函数: sub_5bc5b0
// 地址: 0x5bc5b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1
int32_t ebp = 0
void* var_8 = edi
uint32_t* esi = *(edi + 0x60)
uint32_t ebx_3 = (*(edi + 0x64) - esi + 3) u>> 2

if (esi u> *(edi + 0x64))
    ebx_3 = 0

if (ebx_3 != 0)
    void* eax_1 = edi + 0x48
    void* var_4_1 = eax_1
    
    do
        uint32_t edi_1 = *esi
        sub_5c3920(edi_1, sub_5c2090(eax_1, *(edi_1 + 0x18), *(edi_1 + 0x1c)))
        eax_1 = var_4_1
        esi = &esi[1]
        ebp += 1
    while (ebp != ebx_3)
    
    edi = var_8

long double x87_r0
long double x87_r1
long double x87_r2
sub_5b7ed0(edi, x87_r0, x87_r1, x87_r2, arg2)
int32_t eax_3 = sub_5ba880(edi)
int32_t esi_1 = *(edi + 0x64)
int32_t ebx_4 = 0
int32_t* ecx_4 = *(edi + 0x60)

if (ecx_4 == esi_1)
    *(edi + 0x9c) = 0
    return eax_3

do
    void* eax_4 = *ecx_4
    
    if (eax_4 != 0)
        ebx_4 += (*(eax_4 + 0x28) - *(eax_4 + 0x24)) s/ 0x78
    
    ecx_4 = &ecx_4[1]
while (ecx_4 != esi_1)

*(var_8 + 0x9c) = ebx_4
return var_8
