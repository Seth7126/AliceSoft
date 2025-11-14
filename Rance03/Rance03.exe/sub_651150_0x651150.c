// 函数: sub_651150
// 地址: 0x651150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = arg1
int32_t result = 0

while (true)
    int32_t ecx
    ecx.b = *esi
    
    if (ecx.b u>= 0x81 && ecx.b u<= 0x9f)
    label_65116d:
        esi = &esi[2]
        result += 2
        continue
    else if (ecx.b u>= 0xe0 && ecx.b u<= 0xef)
        goto label_65116d
    
    if (ecx.b != 9)
        if (ecx.b == 0)
            break
        
        esi = &esi[1]
        result += 1
    else
        esi = &esi[1]
        result += 4 - (result & 3)

return result
