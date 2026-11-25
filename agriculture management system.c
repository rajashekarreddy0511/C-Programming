#include <stdio.h>
#include <string.h>

struct Farmer
{
    char name[50];
    char village[50];
    char soil[30];
    char water[30];
    float land;
};

void farmerDetails()
{
    struct Farmer f;

    printf("\n===== FARMER DETAILS =====\n");

    printf("Enter farmer name: ");
    scanf(" %[^\n]", f.name);

    printf("Enter village: ");
    scanf(" %[^\n]", f.village);

    printf("Enter land area (in acres): ");
    scanf("%f", &f.land);

    printf("Enter soil type (Red/Black/Sandy): ");
    scanf(" %[^\n]", f.soil);

    printf("Enter water source (Rainfall/Borewell/Canal): ");
    scanf(" %[^\n]", f.water);

    printf("\n===== FARMER INFORMATION =====\n");
    printf("Name: %s\n", f.name);
    printf("Village: %s\n", f.village);
    printf("Land Area: %.2f acres\n", f.land);
    printf("Soil Type: %s\n", f.soil);
    printf("Water Source: %s\n", f.water);
}

void cropRecommendation()
{
    int soil, water;

    printf("\n===== CROP RECOMMENDATION =====\n");

    printf("Select Soil Type:\n");
    printf("1. Black Soil\n");
    printf("2. Red Soil\n");
    printf("3. Sandy Soil\n");
    printf("Enter choice: ");
    scanf("%d", &soil);

    printf("\nSelect Water Availability:\n");
    printf("1. High\n");
    printf("2. Medium\n");
    printf("3. Low\n");
    printf("Enter choice: ");
    scanf("%d", &water);

    printf("\nRecommended Crops:\n");

    if(soil == 1)
    {
        if(water == 1)
            printf("Cotton, Sugarcane, Rice\n");
        else if(water == 2)
            printf("Cotton, Maize, Soybean\n");
        else if(water == 3)
            printf("Millets, Chickpea\n");
        else
            printf("Invalid water choice!\n");
    }
    else if(soil == 2)
    {
        if(water == 1)
            printf("Rice, Groundnut, Maize\n");
        else if(water == 2)
            printf("Groundnut, Pulses, Maize\n");
        else if(water == 3)
            printf("Millets, Sorghum\n");
        else
            printf("Invalid water choice!\n");
    }
    else if(soil == 3)
    {
        if(water == 1)
            printf("Rice, Sugarcane\n");
        else if(water == 2)
            printf("Groundnut, Watermelon\n");
        else if(water == 3)
            printf("Millets, Pulses\n");
        else
            printf("Invalid water choice!\n");
    }
    else
    {
        printf("Invalid soil choice!\n");
    }
}

void cropInformation()
{
    int choice;

    printf("\n===== CROP INFORMATION =====\n");
    printf("1. Rice\n");
    printf("2. Cotton\n");
    printf("3. Maize\n");
    printf("4. Groundnut\n");
    printf("5. Wheat\n");
    printf("6. Millets\n");

    printf("Enter crop choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nCrop: Rice\n");
            printf("Season: Kharif and Rabi (depending on region)\n");
            printf("Water Requirement: High\n");
            printf("Soil: Clayey and fertile soil\n");
            break;

        case 2:
            printf("\nCrop: Cotton\n");
            printf("Season: Kharif\n");
            printf("Water Requirement: Medium\n");
            printf("Soil: Black soil\n");
            break;

        case 3:
            printf("\nCrop: Maize\n");
            printf("Season: Kharif and Rabi\n");
            printf("Water Requirement: Medium\n");
            printf("Soil: Well-drained soil\n");
            break;

        case 4:
            printf("\nCrop: Groundnut\n");
            printf("Season: Kharif and Rabi\n");
            printf("Water Requirement: Medium\n");
            printf("Soil: Sandy loam soil\n");
            break;

        case 5:
            printf("\nCrop: Wheat\n");
            printf("Season: Rabi\n");
            printf("Water Requirement: Medium\n");
            printf("Soil: Loamy soil\n");
            break;

        case 6:
            printf("\nCrop: Millets\n");
            printf("Season: Kharif\n");
            printf("Water Requirement: Low\n");
            printf("Soil: Dry and well-drained soil\n");
            break;

        default:
            printf("Invalid crop choice!\n");
    }
}

void fertilizerGuide()
{
    int choice;

    printf("\n===== FERTILIZER GUIDE =====\n");
    printf("1. Rice\n");
    printf("2. Cotton\n");
    printf("3. Maize\n");
    printf("4. Groundnut\n");
    printf("5. Wheat\n");

    printf("Enter crop choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Rice: Nitrogen, Phosphorus and Potassium are important nutrients.\n");
            break;

        case 2:
            printf("Cotton: Nitrogen, Phosphorus and Potassium support crop growth.\n");
            break;

        case 3:
            printf("Maize: Nitrogen is important for healthy growth.\n");
            break;

        case 4:
            printf("Groundnut: Phosphorus and Calcium are important nutrients.\n");
            break;

        case 5:
            printf("Wheat: Nitrogen, Phosphorus and Potassium are essential nutrients.\n");
            break;

        default:
            printf("Invalid crop choice!\n");
    }

    printf("\nNote: Fertilizer requirements depend on soil testing and local agricultural recommendations.\n");
}

void costEstimation()
{
    float land, seed, fertilizer, labour, irrigation, total;

    printf("\n===== CROP COST ESTIMATION =====\n");

    printf("Enter land area (in acres): ");
    scanf("%f", &land);

    printf("Enter seed cost: ");
    scanf("%f", &seed);

    printf("Enter fertilizer cost: ");
    scanf("%f", &fertilizer);

    printf("Enter labour cost: ");
    scanf("%f", &labour);

    printf("Enter irrigation cost: ");
    scanf("%f", &irrigation);

    total = seed + fertilizer + labour + irrigation;

    printf("\n===== COST DETAILS =====\n");
    printf("Land Area: %.2f acres\n", land);
    printf("Seed Cost: Rs. %.2f\n", seed);
    printf("Fertilizer Cost: Rs. %.2f\n", fertilizer);
    printf("Labour Cost: Rs. %.2f\n", labour);
    printf("Irrigation Cost: Rs. %.2f\n", irrigation);
    printf("----------------------------\n");
    printf("Total Estimated Cost: Rs. %.2f\n", total);
    printf("Cost per Acre: Rs. %.2f\n", total / land);
}

int main()
{
    int choice;

    do
    {
        printf("\n========================================\n");
        printf(" AGRICULTURE CROP MANAGEMENT SYSTEM\n");
        printf("========================================\n");

        printf("1. Farmer Details\n");
        printf("2. Crop Recommendation\n");
        printf("3. Crop Information\n");
        printf("4. Fertilizer Guide\n");
        printf("5. Crop Cost Estimation\n");
        printf("6. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                farmerDetails();
                break;

            case 2:
                cropRecommendation();
                break;

            case 3:
                cropInformation();
                break;

            case 4:
                fertilizerGuide();
                break;

            case 5:
                costEstimation();
                break;

        case 6:
            printf("\nThank you for using Agriculture Crop Management System!\n");
                break;
        default:
            printf("\nInvalid choice! Please try again.\n");
        }
    } while(choice != 6);
    return 0;
}