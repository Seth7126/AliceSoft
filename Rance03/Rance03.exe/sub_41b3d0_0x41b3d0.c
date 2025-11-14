// 函数: sub_41b3d0
// 地址: 0x41b3d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char i = *arg1
void* result

if ((i u< 0x81 || i u> 0x9f) && (i u< 0xe0 || i u> 0xef))
    if (i u<= 0x20 || i == 0x7f)
        return &arg1[1]
    
    if (i u< 0x61 || i u> 0x7a)
        if (i u< 0x41)
            if (i != 0x5f)
                return &arg1[1]
        else if (i u> 0x5a && i != 0x5f)
            return &arg1[1]
    
    result = &arg1[1]
else
    result = &arg1[2]

for (i = *result; i != 0; i = *result)
    if ((i u< 0x81 || i u> 0x9f) && (i u< 0xe0 || i u> 0xef))
        if (i u<= 0x20)
            break
        
        if (i == 0x7f)
            break
        
        if ((i u< 0x61 || i u> 0x7a) && (i u< 0x41 || i u> 0x5a) && i != 0x5f)
            break
        
        result += 1
    else
        result += 2

return result
