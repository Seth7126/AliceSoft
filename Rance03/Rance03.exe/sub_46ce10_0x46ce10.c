// 函数: sub_46ce10
// 地址: 0x46ce10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[1].b == 0)
    int32_t eax
    eax.b = 1
    return eax

sub_46cec0(arg1)

if (CoCreateInstance(&data_6d9f78, 0, CLSCTX_INPROC_SERVER, &data_6d9f68, arg1) s>= 0)
    int32_t* ecx = *arg1
    
    if (ecx != 0)
        if ((*(*ecx + 0x1c))(ecx, arg3, 0x800) s>= 0)
            int32_t* eax_4 = *arg1
            
            if ((*(*eax_4 + 0x10))(eax_4, 4, sub_46cd60, arg1, 1) == 0)
                for (int32_t* i = arg1[2]; i != arg1[3]; i = &i[1])
                    if (sub_46d300(*i, arg2).b == 0)
                        sub_46cec0(arg1)
                        int32_t eax_6
                        eax_6.b = 0
                        return eax_6
                
                int32_t* eax_5
                eax_5.b = 1
                return eax_5
        
        sub_46cec0(arg1)

HRESULT eax_1
eax_1.b = 0
return eax_1
