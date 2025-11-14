// 函数: sub_10004125
// 地址: 0x10004125
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_c = edi
uint32_t dwMilliseconds = 0
void* result
uint32_t i

do
    result = sub_100037d7(arg1)
    
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
