// 函数: sub_56f150
// 地址: 0x56f150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]
int32_t* esi = *arg1

if (esi == ebx)
    arg1[1] = esi
    return esi

do
    void* ecx = *esi
    
    if (ecx != 0)
        void* var_10_1 = ecx
        sub_56f510(ecx)
    
    esi = &esi[1]
while (esi != ebx)

int32_t eax = *arg1
arg1[1] = eax
return eax
