// 函数: sub_601bb0
// 地址: 0x601bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* ecx = data_7fcbb0

if (ecx != 0)
    int32_t eax_1 = sub_6211e0(ecx, arg2, 0xffffffff, 0)
    *(arg1 + 8) = eax_1
    
    if (eax_1 s>= 0)
        void* result = sub_622840(data_7fcbb0, eax_1)
        
        if (result != 0)
            if (sub_627910(result, arg3, 0) != 0)
                return result
            
            sub_621db0(data_7fcbb0, *(arg1 + 8))
            return 0
        
        sub_621db0(data_7fcbb0, eax_1)

return 0
