// 函数: sub_41b370
// 地址: 0x41b370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = arg1
void* result = nullptr

while (true)
    arg1.b = *esi
    
    if (arg1.b u>= 0x81 && arg1.b u<= 0x9f)
    label_41b38b:
        esi = &esi[2]
        result += 2
        continue
    else if (arg1.b u>= 0xe0 && arg1.b u<= 0xef)
        goto label_41b38b
    
    if (arg1.b != 9)
        if (arg1.b == 0)
            break
        
        esi = &esi[1]
        result += 1
    else
        esi = &esi[1]
        result += 4 - (result & 3)

return result
