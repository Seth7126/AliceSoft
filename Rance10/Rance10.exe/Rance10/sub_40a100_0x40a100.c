// 函数: sub_40a100
// 地址: 0x40a100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]
int32_t* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    int32_t* ecx = *esi
    
    if (ecx != 0)
        (**ecx)(1)
    
    esi = &esi[1]
while (esi != ebx)

int32_t eax_2 = *arg1
arg1[1] = eax_2
return eax_2
