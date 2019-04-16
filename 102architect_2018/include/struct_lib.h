/*
** EPITECH PROJECT, 2018
** 102architech - struct - lib
** File description:
** 
*/

struct operator{
    char op;
    int index;
};

typedef struct operator operator;

struct var_rotate{
    float angle;
    float tab[9];
};

typedef struct var_rotate var_rotate;

struct var_trans{
    float a;
    float b;
    float tab[9];
};

typedef struct var_trans var_trans;

struct var_scale{
    float a;
    float b;
    float tab[9];
};

typedef struct var_scale var_scale;

struct var_reflection{
    float angle;
    float tab[9];
};

typedef struct var_reflection var_reflection;

struct base_matrice{
    float matrice_temp[9];
    float x;
    float y;
    float z;
    float tab[3];
    float x_final;
    float y_final;
    float z_final;
    int display;
};

typedef struct base_matrice base_matrice;
int my_strlen(char const *str);
void display_translation(var_trans trans);
void display_reflection(var_reflection reflect);
void display_rotate(var_rotate var);
void display_scale(var_scale scale);
void display_matrice(float *tab);
void display_result(float *result, base_matrice *base);
void matrix_3_to_1(float *tab, float *tab2, float *newtab);
void matrix_3_to_3(float *tab, float *tab2, float *newtab);