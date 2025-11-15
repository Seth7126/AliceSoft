// 函数: sub_635940
// 地址: 0x635940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
struct std::_Node_base::std::_Node_if::VTable** ebp_1 = arg1[0xa]
struct std::_Node_base::std::_Node_endif::VTable** result = sub_636af0(arg1)

if (result.b != 0)
    goto label_635978

if (arg1[0x13] == 0x7c)
    sub_635a70(&arg1[9], sub_636ee0(&arg1[9], 8))
label_635978:
    result = sub_636d90(&arg1[9], ebp_1)
    struct std::_Node_base::std::_Node_endif::VTable** result_1 = result
    
    while (arg1[0x13] == 0x7c)
        int16_t* edi_1 = *arg1
        
        if (edi_1 != arg1[2])
            if (*edi_1 == 0x5c && sub_636a80(arg1) != 0)
                *arg1 = &edi_1[1]
            
            *arg1 += 2
        
        sub_635790(arg1)
        
        if (sub_636af0(arg1) == 0)
            sub_635a70(&arg1[9], sub_636ee0(&arg1[9], 8))
        
        result = sub_636e50(&arg1[9], ebp_1, result_1)

var_4
return result
