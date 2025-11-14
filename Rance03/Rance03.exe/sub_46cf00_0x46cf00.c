// 函数: sub_46cf00
// 地址: 0x46cf00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi
int32_t var_4 = esi
int32_t edi
int32_t var_8 = edi
int32_t* esp_1 = &var_8
int32_t* i = *(arg1 + 8)

if (i != *(arg1 + 0xc))
    int32_t ebx
    int32_t var_c = ebx
    int32_t* esp_2 = &var_c
    ebx.b = arg2
    
    do
        int32_t* eax = *(*i + 4)
        
        if (eax != 0)
            int32_t ecx = *eax
            *(esp_2 - 4) = eax
            esp_2 -= 4
            
            if (ebx.b == 0)
                (*(ecx + 0x20))()
            else
                (*(ecx + 0x1c))()
        
        i = &i[1]
    while (i != *(arg1 + 0xc))
    
    *esp_2
    esp_1 = &esp_2[1]

*esp_1
esp_1[1]
