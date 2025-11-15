// 函数: sub_6295f0
// 地址: 0x6295f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi

if (ebx != 0 && arg1[6] != 0)
    int32_t eax_1 = (*(*ebx + 0x10))()
    
    if ((*(*arg1 + 0x10))() == eax_1)
        sub_62a140(&arg1[-8])
        sub_62a060(&arg1[-8])
        int32_t edi_2 = 0
        int32_t edx_2 = (**ebx)()
        int32_t var_c_1 = edx_2
        
        if (eax_1 s> 0)
            int32_t ebx_1 = 0
            
            do
                int32_t ecx_5
                
                if (arg1[-3] != 0)
                    ecx_5 = arg1[-4]
                else
                    ecx_5 = 0
                
                if (sub_629d40(&arg1[-8], ecx_5 + (edi_2 << 2), *(edx_2 + (edi_2 << 2)), 
                        *(arg1[6] + 0x2c) + ebx_1).b == 0)
                    goto label_6296b0
                
                edx_2 = var_c_1
                edi_2 += 1
                ebx_1 += 0x70
            while (edi_2 s< eax_1)
            
            ebx = arg2
        
        sub_629f80(&arg1[-8])
        return (*(*ebx + 8))(arg1[2])

label_6296b0:
uint32_t result
result.b = 0
return result
