// 函数: __calloc_crt
// 地址: 0x1000416a
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_c = edi
uint32_t dwMilliseconds = 0
void* result
uint32_t i

do
    result = sub_10008e3a(arg1, arg2, nullptr)
    
    if (result != 0)
        break
    
    if (data_1002208c u<= result)
        break
    
    Sleep(dwMilliseconds)
    i = dwMilliseconds + 0x3e8
    
    if (i u> data_1002208c)
        i = 0xffffffff
    
    dwMilliseconds = i
while (i != 0xffffffff)
return result
