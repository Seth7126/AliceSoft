// 函数: _wcscpy_s
// 地址: 0x6aa67e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_edi_1
void* eax_1

if (arg1 == 0)
    eax_1 = __errno()
    __saved_edi_1 = 0x16
else
    int32_t i_1 = arg2
    
    if (i_1 == 0)
        eax_1 = __errno()
        __saved_edi_1 = 0x16
    else
        int16_t* ecx_1 = arg3
        
        if (ecx_1 != 0)
            void* edi_2 = arg1 - ecx_1
            int32_t i
            
            do
                int16_t eax_3 = *ecx_1
                *(edi_2 + ecx_1) = eax_3
                ecx_1 = &ecx_1[1]
                
                if (eax_3 == 0)
                    break
                
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (i_1 != 0)
                return 0
            
            *arg1 = 0
            eax_1 = __errno()
            __saved_edi_1 = 0x22
        else
            *arg1 = 0
            eax_1 = __errno()
            __saved_edi_1 = 0x16

*eax_1 = __saved_edi_1
__invalid_parameter_noinfo()
return __saved_edi_1
