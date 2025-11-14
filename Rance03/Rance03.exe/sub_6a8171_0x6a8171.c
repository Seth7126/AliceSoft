// 函数: sub_6a8171
// 地址: 0x6a8171
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esp_7 = arg1[-6]
__getptd()[0xeb] = 0
void* edx = arg1[5]
void* result = arg1[3]
int32_t eax_1

if (*(edx + 4) s> 0x80)
    eax_1 = *(result + 8)
else
    eax_1 = sx.d(*(result + 8))

arg1[-8] = eax_1
int32_t esi = *(edx + 0x10)
int32_t i = 0
arg1[-9] = 0

if (*(edx + 0xc) u> 0)
    do
        int32_t edi = i * 0x14
        arg1[6] = edi
        result = arg1[3]
        
        if (eax_1 s> *(edi + esi + 4))
            result = arg1[3]
            
            if (eax_1 s<= *(arg1[6] + esi + 8))
                int32_t eax_4 = *(i * 0x14 + esi + 4) + 1
                arg1[-8] = eax_4
                eax_1 = *(*(edx + 8) + (eax_4 << 3))
                arg1[-8] = eax_1
                break
        
        i += 1
        arg1[-9] = i
    while (i u< *(edx + 0xc))

*(esp_7 - 4) = eax_1
*(esp_7 - 8) = edx
*(esp_7 - 0xc) = 0
*(esp_7 - 0x10) = result
___FrameUnwindToState()
arg1[-7] = 0
arg1[-1] = 0
int32_t* esi_1 = arg1[2]
arg1[-1] = 0xfffffffe
arg1[4] = 0
$LN16(arg1, esi_1, result)
*(esp_7 - 4) = &data_6a8212
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*(esp_7 + 4)
*(esp_7 + 8)
*(esp_7 + 0xc)
*arg1
*arg1 = *(esp_7 - 4)
*arg1
return result
