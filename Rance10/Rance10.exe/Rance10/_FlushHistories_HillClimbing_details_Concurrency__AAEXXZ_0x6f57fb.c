// 函数: ?FlushHistories@HillClimbing@details@Concurrency@@AAEXXZ
// 地址: 0x6f57fb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

long double x87_r7 = float.t(0)
void* edx = arg1 + 0x14
int32_t i_1 = 0x40
int32_t result
int32_t i

do
    result = *edx
    
    if (result != *(arg1 + 0x814) && result != *(arg1 + 0x818))
        result = *(arg1 + 0x824) - *(edx + 4)
        
        if (result u> 0x32)
            *(edx - 4) = 0
            *edx = 0
            *(edx + 4) = 0
            *(edx - 0x14) = fconvert.d(x87_r7)
            *(edx - 0xc) = fconvert.d(x87_r7)
    
    edx += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
return result
