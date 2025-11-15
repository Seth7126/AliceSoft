// 函数: sub_6107c0
// 地址: 0x6107c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t ebp = *(arg1[0x284] - 4)
arg1[0x284] -= 4
void* result

if (sub_610960(arg1).b != 0)
    result = sub_622720(&arg1[0x52], ebp)
    
    if (result != 0)
        sub_621db0(&arg1[0x52], *(result + 0x2c))
        
        if (arg1[0x4a4].b != 0)
            void* eax_1 = *(result + 0x24)
            int32_t eax_2
            
            if (eax_1 != 0)
                eax_2 = *(eax_1 + 0x58)
            else
                eax_2 = 0xffffffff
            
            sub_5fb5f0(arg1[0x496] + eax_2 * 0x38)
        
        return sub_621db0(&arg1[0x52], ebp)

result.b = 0
return result
