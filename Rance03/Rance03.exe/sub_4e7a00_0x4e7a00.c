// 函数: sub_4e7a00
// 地址: 0x4e7a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t ebx = 0
int32_t result = arg1[1]

if (result s> 0)
    do
        int32_t ecx = arg1[2]
        int32_t edi_1 = ecx + ebx
        
        if (edi_1 s>= ecx && result + ecx s> edi_1)
            int32_t* ecx_1 = (edi_1 - ecx) << 2
            int32_t* ebp_1 = *(ecx_1 + arg1[3])
            
            if (ebp_1 != 0)
                int32_t* ecx_2 = arg1[8]
                
                if (ecx_2 != 0)
                    (**ecx_2)(ebp_1)
                
                (*(ebp_1[1] + 0x6c))(arg1[7])
                (*(*ebp_1 + 4))()
                *(ecx_1 + arg1[3]) = 0
                void* ecx_6 = arg1[0xa]
                
                if (ecx_6 != 0)
                    sub_4e7c40(ecx_6, edi_1)
        
        result = arg1[1]
        ebx += 1
    while (ebx s< result)

return result
