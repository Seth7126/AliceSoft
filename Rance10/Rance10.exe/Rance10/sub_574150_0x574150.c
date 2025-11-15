// 函数: sub_574150
// 地址: 0x574150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = sub_5740e0(arg1)
int32_t edi = *(arg1 + 0x10)
int32_t* i = *(arg1 + 0xc)
int32_t var_4 = edi

for (; i != edi; i = &i[3])
    int32_t edx_1 = *i
    int32_t ebp_3 = (i[1] - edx_1) s>> 2
    result = ebp_3 - 1
    
    if (result s> 0)
        result = 1
        int32_t* edi_1 = nullptr
        int32_t result_1 = 1
        bool cond:0_1
        
        do
            int32_t j = result
            
            if (result s< ebp_3)
                do
                    sub_571f80(*(edi_1 + edx_1), *(edx_1 + (j << 2)))
                    j += 1
                    edx_1 = *i
                while (j s< (i[1] - edx_1) s>> 2)
                
                result = result_1
            
            edx_1 = *i
            edi_1 = &edi_1[1]
            result_1 = result + 1
            ebp_3 = (i[1] - edx_1) s>> 2
            cond:0_1 = result s< ebp_3 - 1
            result = result_1
        while (cond:0_1)
        edi = var_4

return result
