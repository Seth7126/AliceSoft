// 函数: sub_42e0d0
// 地址: 0x42e0d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1
void* var_10 = ebx

if (arg2 != 0)
    void* edx_1
    
    if (*arg2 != 0)
        char* edx_2 = arg2
        char i
        
        do
            i = *edx_2
            edx_2 = &edx_2[1]
        while (i != 0)
        edx_1 = edx_2 - &edx_2[1]
    else
        edx_1 = nullptr
    
    sub_402110(ebx + 0x54, arg2, edx_1)

void* ecx_2 = ebx + 0x54
void* var_14 = ecx_2

if (*(ebx + 0x68) u>= 0x10)
    ecx_2 = *ecx_2
    var_14 = ecx_2

void* edx_3 = ecx_2 + 1
*(ebx + 0x2c) = *(ebx + 0x28)
int32_t eax

do
    eax.b = *ecx_2
    ecx_2 += 1
while (eax.b != 0)
void* ecx_3 = ecx_2 - edx_3
void* var_18 = ecx_3
void** i_2

if (ecx_2 != edx_3)
    i_2 = *(ebx + 0x20)
    void** i_1 = *i_2
    
    if (i_1 != i_2)
        do
            void* edi_1 = &i_1[4]
            i_2 = i_1[8]
            void** i_4 = i_2
            
            if (i_1[9] u>= 0x10)
                edi_1 = *edi_1
            
            if (ecx_3 s<= i_2)
                void* ebx_2 = ecx_3
                
                while (true)
                    if (_strncmp(edi_1, var_14, ecx_3) == 0)
                        int32_t var_2c_4 = i_1[0xa]
                        ebx = var_10
                        i_2 = sub_42e230(ebx)
                        break
                    
                    i_2.b = *edi_1
                    
                    if (i_2.b u>= 0x81 && i_2.b u<= 0x9f)
                        edi_1 += 1
                        ebx_2 += 1
                    else if (i_2.b u>= 0xe0 && i_2.b u<= 0xef)
                        edi_1 += 1
                        ebx_2 += 1
                    
                    ecx_3 = var_18
                    ebx_2 += 1
                    edi_1 += 1
                    
                    if (ebx_2 s> i_4)
                        ebx = var_10
                        break
                
                ecx_3 = var_18
            
            if (*(i_1 + 0xd) == 0)
                void** i_3 = i_1[2]
                
                if (*(i_3 + 0xd) != 0)
                    i_2 = i_1[1]
                    
                    if (*(i_2 + 0xd) == 0)
                        while (i_1 == i_2[2])
                            i_1 = i_2
                            i_2 = i_2[1]
                            
                            if (*(i_2 + 0xd) != 0)
                                break
                    
                    i_1 = i_2
                else
                    i_1 = i_3
                    i_2 = *i_1
                    
                    while (*(i_2 + 0xd) == 0)
                        i_1 = i_2
                        i_2 = *i_1
        while (i_1 != *(ebx + 0x20))
else
    int32_t esi_1 = 0
    i_2 = (*(**(ebx + 0xc) + 0x14))()
    
    if (i_2 s> 0)
        int32_t eax_3
        
        do
            int32_t var_2c_2 = esi_1
            sub_42e230(ebx)
            esi_1 += 1
            eax_3 = (*(**(ebx + 0xc) + 0x14))()
        while (esi_1 s< eax_3)
        
        return eax_3

return i_2
