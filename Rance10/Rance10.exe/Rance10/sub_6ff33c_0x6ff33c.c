// 函数: sub_6ff33c
// 地址: 0x6ff33c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esp_7 = arg1[-6]
*(sub_702f40() + 0x20) = 0
void* edx = arg1[5]
void* result = arg1[3]
int32_t eax_1

if (*(edx + 4) s> 0x80)
    eax_1 = *(result + 8)
else
    eax_1 = sx.d(*(result + 8))

arg1[-8] = eax_1
int32_t edi = *(edx + 0x10)
int32_t i = 0
arg1[-0xa] = 0

if (*(edx + 0xc) u> 0)
    do
        int32_t ebx = i * 0x14
        arg1[-9] = ebx
        result = arg1[3]
        
        if (eax_1 s> *(ebx + edi + 4))
            result = arg1[3]
            
            if (eax_1 s<= *(arg1[-9] + edi + 8))
                int32_t eax_4 = *(i * 0x14 + edi + 4) + 1
                arg1[-8] = eax_4
                eax_1 = *(*(edx + 8) + (eax_4 << 3))
                arg1[-8] = eax_1
                break
        
        i += 1
        arg1[-0xa] = i
    while (i u< *(edx + 0xc))

*(esp_7 - 4) = eax_1
*(esp_7 - 8) = edx
*(esp_7 - 0xc) = 0
*(esp_7 - 0x10) = result
___FrameUnwindToState()
arg1[-7] = 0
arg1[-1] = 0
int32_t* edi_1 = arg1[2]
arg1[-1] = 0xfffffffe
arg1[-0x10] = 0
sub_6ff3e3(arg1, edi_1)
*(esp_7 - 4) = &data_6ff3dc
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*(esp_7 + 4)
*(esp_7 + 8)
*(esp_7 + 0xc)
*arg1
*arg1 = *(esp_7 - 4)
*arg1
return result
