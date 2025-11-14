// 函数: sub_1000641e
// 地址: 0x1000641e
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t esp_7 = arg1[-6]
*(__getptd() + 0x20c) = 0
void* esi = arg1[5]
void* edi = arg1[3]
int32_t ecx

if (*(esi + 4) s> 0x80)
    ecx = *(edi + 8)
else
    ecx = sx.d(*(edi + 8))

int32_t ebx = *(esi + 0x10)
arg1[-8] = 0

while (true)
    int32_t eax_1 = arg1[-8]
    
    if (eax_1 u>= *(esi + 0xc))
        break
    
    void* eax_3 = eax_1 * 0x14 + ebx
    int32_t edx_1 = *(eax_3 + 4)
    
    if (ecx s> edx_1 && ecx s<= *(eax_3 + 8))
        ecx = *(*(esi + 8) + (edx_1 << 3) + 8)
        break
    
    arg1[-8] += 1

*(esp_7 - 4) = ecx
*(esp_7 - 8) = esi
*(esp_7 - 0xc) = 0
*(esp_7 - 0x10) = edi
sub_1000611d()
arg1[-7] = 0
arg1[-1] = 0
int32_t* esi_1 = arg1[2]
arg1[-1] = 0xfffffffe
arg1[4] = 0
sub_100064ab(arg1, esi_1, edi)
int32_t result = arg1[-7]
*(esp_7 - 4) = &data_1000649f
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*(esp_7 + 4)
*(esp_7 + 8)
*(esp_7 + 0xc)
*arg1
*arg1 = *(esp_7 - 4)
*arg1
return result
