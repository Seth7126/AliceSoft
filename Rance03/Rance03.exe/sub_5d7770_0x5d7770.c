// 函数: sub_5d7770
// 地址: 0x5d7770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 8)
void* result = nullptr

for (; i != *(arg1 + 0xc); i = &i[1])
    void* ecx = *i
    
    if (ecx != 0)
        int32_t edx_1 = *(ecx + 0x14)
        void* ecx_1
        
        if (edx_1 u> 5)
            ecx_1 = nullptr
        else
            switch (edx_1)
                case 0, 1, 3, 4, 5
                    ecx_1 = *(ecx + 0xc)
                case 2
                    char* ecx_2
                    
                    if (*(ecx + 0xc) != 0)
                        ecx_2 = *(ecx + 8)
                    
                    if (*(ecx + 0xc) == 0 || ecx_2 == 0)
                        ecx_1 = 1
                    else
                        do
                            edx_1.b = *ecx_2
                            ecx_2 = &ecx_2[1]
                        while (edx_1.b != 0)
                        
                        ecx_1 = ecx_2 - &ecx_2[1] + 1
        
        result += ecx_1

return result
