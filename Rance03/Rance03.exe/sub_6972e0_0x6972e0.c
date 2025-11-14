// 函数: sub_6972e0
// 地址: 0x6972e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[1].b == 0)
    return 

if ((*(*arg1 + 0x18))() != 0x18)
    void* eax
    int32_t ecx_2
    eax, ecx_2 = (*(*arg1 + 0x18))()
    
    if (eax == 0x20)
        int32_t i = 0
        
        if (arg1[3] s> 0)
            char ebx_3 = arg4
            
            do
                eax = (*(*arg1 + 8))(0, i)
                int32_t j = 0
                
                if (arg1[2] s> 0)
                    eax += 2
                    
                    do
                        *(eax - 2) = ebx_3
                        eax += 4
                        j += 1
                        *(eax - 4) = arg2
                        ebx_3 = arg4
                        *(eax - 5) = arg3
                        *(eax - 3) = 0xff
                    while (j s< arg1[2])
                
                i += 1
            while (i s< arg1[3])
else
    int32_t i_1 = 0
    
    if (arg1[3] s> 0)
        char ebx_1 = arg4
        
        do
            void* eax_3 = (*(*arg1 + 8))(0, i_1)
            int32_t j_1 = 0
            
            if (arg1[2] s> 0)
                eax_3 += 2
                
                do
                    *(eax_3 - 2) = ebx_1
                    eax_3 += 3
                    j_1 += 1
                    *(eax_3 - 3) = arg2
                    ebx_1 = arg4
                    *(eax_3 - 4) = arg3
                while (j_1 s< arg1[2])
            
            i_1 += 1
        while (i_1 s< arg1[3])
