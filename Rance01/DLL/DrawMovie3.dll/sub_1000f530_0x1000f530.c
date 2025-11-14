// 函数: sub_1000f530
// 地址: 0x1000f530
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_1 = (*(*arg1 + 0x28))(arg2)
void* eax_2 = *arg1

if (eax_1 s< 0)
    (*(eax_2 + 0x2c))()
    return eax_1

int32_t ebp
int32_t var_14 = ebp
int32_t edi_1 = (*(eax_2 + 0x20))(arg2)

if (edi_1 == 0)
    arg1[6] = arg2
    (*(*arg2 + 4))(arg2)
    edi_1 = (*(*arg1 + 0x24))(arg2)
    
    if (edi_1 s>= 0)
        edi_1 = (*(*arg2 + 0x10))(arg2, &arg1[3], arg2)
        
        if (edi_1 s>= 0)
            int32_t eax_11 = (*(*arg1 + 0x30))(arg2)
            edi_1 = eax_11
            
            if (edi_1 s>= 0)
                return eax_11
            
            (*(*arg2 + 0x14))(arg2)
else if (edi_1 s>= 0 || edi_1 == 0x80004005 || edi_1 == 0x80070057)
    edi_1 = 0x8004022a

(*(*arg1 + 0x2c))()
int32_t* eax_14 = arg1[6]

if (eax_14 != 0)
    (*(*eax_14 + 8))(eax_14)
    arg1[6] = 0

return edi_1
