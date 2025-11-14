// 函数: sub_10009dcb
// 地址: 0x10009dcb
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

uint32_t eax = data_10023500

if (eax == 0)
    eax = 0x200
    data_10023500 = eax
else if (eax s< 0x14)
    eax = 0x14
    data_10023500 = eax

void* eax_1 = __calloc_crt(eax, 4)
data_100224e4 = eax_1

if (eax_1 == 0)
    data_10023500 = 0x14
    eax_1 = __calloc_crt(0x14, 4)
    data_100224e4 = eax_1
    
    if (eax_1 == 0)
        return 0x1a

int32_t* edx = nullptr
void** ecx_2 = &data_10020a90

while (true)
    *(edx + eax_1) = ecx_2
    ecx_2 = &ecx_2[8]
    edx = &edx[1]
    
    if (ecx_2 s>= &data_10020d10)
        break
    
    eax_1 = data_100224e4

int32_t edx_1 = 0

for (void* i = &data_10020aa0; i s< 0x10020b00; )
    int32_t eax_6 = *(((edx_1 & 0x1f) << 6) + (&data_10023540)[edx_1 s>> 5])
    
    if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe || eax_6 == 0)
        *i = 0xfffffffe
    
    i += 0x20
    edx_1 += 1

return 0
