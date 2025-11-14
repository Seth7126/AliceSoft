// 函数: __realloc_crt
// 地址: 0x100041b6
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_c = edi
uint32_t dwMilliseconds = 0
void* result
uint32_t i

do
    result = sub_10008f58(arg1, arg2)
    
    if (result != 0)
        break
    
    if (arg2 == result)
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
