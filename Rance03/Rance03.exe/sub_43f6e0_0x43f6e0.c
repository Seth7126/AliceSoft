// 函数: sub_43f6e0
// 地址: 0x43f6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t* eax

if (arg2 != 0 && (*(*arg2 + 8))(0) == 0x11)
    eax = (*(*arg2 + 0x1c))(0)
    
    if (eax != 0)
        int32_t eax_4 = (*(*eax + 8))()
        
        if (eax_4 s<= 0)
            sub_43fa70(arg1 + 4)
            int32_t* eax_5
            eax_5.b = 1
            return eax_5
        
        void* esi_1 = arg1 + 4
        void* var_4 = esi_1
        sub_43f950(esi_1, eax_4)
        int32_t edi_1 = 0
        
        if (eax_4 s> 0)
            int32_t ebx_1 = 0
            
            do
                if (sub_43ff20(*esi_1 + ebx_1, (*(*eax + 0x1c))(edi_1)) == 0)
                    return 0
                
                esi_1 = var_4
                edi_1 += 1
                ebx_1 += 0x68
            while (edi_1 s< eax_4)
        
        return 1

eax.b = 0
return eax
