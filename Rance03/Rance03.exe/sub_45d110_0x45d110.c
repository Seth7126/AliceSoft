// 函数: sub_45d110
// 地址: 0x45d110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* result

if (cond:0)
    result = arg1
else
    result = *arg1

*result = 0

if (*(arg2 + 0x20) != 0)
    void* ebx_1 = *(arg2 + 0x24)
    
    if (ebx_1 != *(arg2 + 0x1c) && ebx_1 != 0xfffffff8)
        if (*(ebx_1 + 0x24) != 1)
            result.b = 1
            return result
        
        if (sub_40c250(ebx_1 + 0xc, "string").b == 0 && sub_40c250(ebx_1 + 0xc, 0x6dc444).b == 0)
            if (arg1 != ebx_1 + 0xc)
                sub_401ff0(arg1, ebx_1 + 0xc, 0, 0xffffffff)
            
            if (sub_4665e0(arg2) != 0)
                result.b = 1
                return result

result.b = 0
return result
