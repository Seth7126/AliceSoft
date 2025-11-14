// 函数: sub_5fd4e0
// 地址: 0x5fd4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi
int32_t* var_8 = edi
int32_t* edi_1 = arg3
arg3.b = (*(*edi_1 + 0x9c))()
int32_t* esp = &var_8

if (sub_5fd2f0(arg1, arg6, arg3.b) != 0)
    esp = &var_8
    
    if (sub_5fd110(arg1, arg6, arg3.b) != 0)
        bool cond:0_1 = *(arg1 + 4) == 0
        int32_t var_c_2 = 1
        int32_t var_10_1 = 0
        int32_t var_14_1 = 1
        int32_t var_18 = 0
        esp = &var_18
        
        if (cond:0_1)
            if ((*(*arg5 + 0x2c))() != 0)
                esp = &var_18
                
                if (sub_5fcf10(arg1, edi_1) != 0)
                    esp = &var_18
                    
                    if ((*(*var_8 + 0x2c))(0, 1, 0, 1) != 0)
                        esp = &var_18
                        
                        if (sub_5fcea0(arg1, edi_1) != 0)
                            return 1
        else if ((*(*arg4 + 0x2c))() != 0)
            esp = &var_18
            
            if (sub_5fcf10(arg1, edi_1) != 0)
                esp = &var_18
                
                if ((*(*arg2 + 0x2c))(0, 1, 0, 1) != 0)
                    esp = &var_18
                    
                    if (sub_5fcea0(arg1, edi_1) != 0)
                        return 1

*esp
esp[1]
return 0
