// 函数: __setenvp
// 地址: 0x6a7cf8
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (data_75df58 == 0)
    ___initmbctable()

char* esi = data_75c94c
int32_t edi = 0

if (esi != 0)
    while (true)
        void* eax
        eax.b = *esi
        
        if (eax.b == 0)
            break
        
        if (eax.b != 0x3d)
            edi += 1
        
        esi = &esi[1] + _strlen(esi)
    
    char** edi_1 = sub_69e723(edi + 1, 4)
    data_75c928 = edi_1
    
    if (edi_1 != 0)
        char* esi_2 = data_75c94c
        int32_t result
        
        if (*esi_2 != 0)
            do
                void* eax_3 = _strlen(esi_2)
                
                if (*esi_2 != 0x3d)
                    char* eax_4 = sub_69e723(eax_3 + 1, 1)
                    *edi_1 = eax_4
                    
                    if (eax_4 == 0)
                        _free(data_75c928)
                        data_75c928 = 0
                        result = 0xffffffff
                        goto label_6a7db4
                    
                    if (_strcpy_s(eax_4, eax_3 + 1, esi_2) != 0)
                        int32_t var_20
                        __builtin_memset(&var_20, 0, 0x14)
                        __invoke_watson()
                        noreturn
                    
                    edi_1 = &edi_1[1]
                
                esi_2 += eax_3 + 1
            while (*esi_2 != 0)
            
            esi_2 = data_75c94c
        
        _free(esi_2)
        data_75c94c = 0
        *edi_1 = nullptr
        result = 0
        data_75df5c = 1
    label_6a7db4:
        return result

return 0xffffffff
