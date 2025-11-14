// 函数: sub_5d4070
// 地址: 0x5d4070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edi

if (*(arg1 + 0xc) != 0)
    edi = *(arg1 + 8)
else
    edi = nullptr

int32_t ebx = arg2
int32_t* result_2 = 0xffffffff
int32_t* result = nullptr
int32_t* result_1 = 0xffffffff

if (*edi != 0)
    do
        arg1.b = *(edi + result)
        
        if (ebx == 0)
            result_2 = result
        
        if ((arg1.b u< 0x81 || arg1.b u> 0x9f) && (arg1.b u< 0xe0 || arg1.b u> 0xef))
            result += 1
        else
            result += 2
        
        ebx -= 1
        
        if (result_2 != 0xffffffff && result_1 == 0xffffffff)
            result_1 = result
    while (*(edi + result) != 0)
    
    if (result_2 != 0xffffffff)
        return _memcpy(edi + result_2, edi + result_1, result - result_1 + 1)

return result
