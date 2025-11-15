// 函数: sub_57c210
// 地址: 0x57c210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]
int32_t* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    int32_t* ecx = *esi
    
    if (ecx != 0)
        int32_t* var_10_1 = ecx
        sub_57c340(ecx)
    
    esi = &esi[1]
while (esi != ebx)

int32_t eax = *arg1
arg1[1] = eax
return eax
