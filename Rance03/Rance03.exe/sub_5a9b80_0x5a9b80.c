// 函数: sub_5a9b80
// 地址: 0x5a9b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t result

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* esi_2 = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (esi_2 != 0)
            void* eax_2 = *arg2
            var_4 = 0x100
            
            if ((*(eax_2 + 0x30))(&var_4, 1).b != 0)
                result = (*(*arg2 + 0x10))(0)
                void* ecx_2 = *(esi_2 + 0x224)
                
                if (ecx_2 != 0)
                    return sub_58c3c0(ecx_2, result)

result.b = 0
return result
