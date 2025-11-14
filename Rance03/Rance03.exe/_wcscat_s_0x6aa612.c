// 函数: _wcscat_s
// 地址: 0x6aa612
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result
void* eax_1

if (arg1 == 0)
    eax_1 = __errno()
    result = 0x16
else
    int32_t i_1 = arg2
    
    if (i_1 == 0)
        eax_1 = __errno()
        result = 0x16
    else
        int16_t* edx_1 = arg3
        int16_t* esi_2
        
        if (edx_1 != 0)
            esi_2 = arg1
            
            while (*esi_2 != 0)
                esi_2 = &esi_2[1]
                int32_t i_2 = i_1
                i_1 -= 1
                
                if (i_2 == 1)
                    break
        
        if (edx_1 == 0 || i_1 == 0)
            *arg1 = 0
            eax_1 = __errno()
            result = 0x16
        else
            void* esi_3 = esi_2 - edx_1
            int32_t i
            
            do
                int16_t eax_3 = *edx_1
                *(esi_3 + edx_1) = eax_3
                edx_1 = &edx_1[1]
                
                if (eax_3 == 0)
                    break
                
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (i_1 != 0)
                return 0
            
            *arg1 = 0
            eax_1 = __errno()
            result = 0x22

*eax_1 = result
__invalid_parameter_noinfo()
return result
