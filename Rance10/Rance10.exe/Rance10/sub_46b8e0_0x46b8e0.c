// 函数: sub_46b8e0
// 地址: 0x46b8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = arg2
void* ebx_1 = arg3 - arg2
arg1[1] = arg2
arg1[2] = arg2
arg1[3] = arg3
arg1[4] = 0
arg1[6] = arg1[5]
sub_42c9c0(&arg1[8], ebx_1)
char* result = nullptr
int32_t edi = 1

if (arg2 u> arg3)
    ebx_1 = nullptr

if (ebx_1 != 0)
    do
        int32_t edx_1 = edi + 1
        *(arg1[8] + (result << 2)) = edi
        int32_t ecx_1
        ecx_1.b = *(result + arg2)
        result = &result[1]
        
        if (ecx_1.b != 0xa)
            edx_1 = edi
        
        edi = edx_1
    while (result != ebx_1)

return result
