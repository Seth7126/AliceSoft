// 函数: sub_5c1f80
// 地址: 0x5c1f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** eax = *arg1
void** edx = eax[1]
int32_t edi = arg2
void** esi = eax

while (*(edx + 0xd) == 0)
    if (edx[4] s>= edi)
        esi = edx
        edx = *edx
    else
        edx = edx[2]

if (esi == eax || edi s< esi[4])
    esi = eax

if (esi != eax)
    eax.b = 0
    return eax

void* var_8
sub_5c2ae0(arg1, &var_8, &arg2)
void* ecx_1 = var_8 + 0x14
int32_t** eax_1

if (ecx_1 != arg3)
    eax_1 = *arg3
    *arg3 = nullptr
    int32_t* esi_1 = *ecx_1
    *ecx_1 = eax_1
    
    if (esi_1 != 0)
        sub_5bd0e0(esi_1)
        int32_t var_14_1 = 0x54
        operator new(esi_1)

eax_1.b = 1
return eax_1
