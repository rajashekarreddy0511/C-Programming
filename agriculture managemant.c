#include <stdio.h>

struct Farmer
{
    char name[50];
    char village[50];
    float land;
    int soil;
    int water;
};

struct Farmer f;
int detailsEntered = 0;

void farmerDetails()
{
    printf("\n--- Farmer Details ---\n");

    printf("Enter farmer name: ");
    scanf(" %[^\n]", f.name);

    printf("Enter village name: ");
    scanf(" %[^\n]", f.village);

    printf("Enter land area in acres: ");
    scanf("%f", &f.land);

    printf("\nSelect soil type:\n");
    printf("1. Black Soil\n");
    printf("2. Red Soil\n");
    printf("3. Sandy Soil\n");
    printf("Enter choice: ");
    scanf("%d", &f.soil);

    printf("\nSelect water availability:\n");
    printf("1. High\n");
    printf("2. Medium\n");
    printf("3. Low\n");
    printf("Enter choice: ");
    scanf("%d", &f.water);

    detailsEntered = 1;

    printf("\n--- Farmer Information ---\n");
    printf("Name: %s\n", f.name);
    printf("Village: %s\n", f.village);
    printf("Land Area: %.2f acres\n", f.land);

    if(f.soil == 1)
        printf("Soil Type: Black Soil\n");
    else if(f.soil == 2)
        printf("Soil Type: Red Soil\n");
    else if(f.soil == 3)
        printf("Soil Type: Sandy Soil\n");
    else
        printf("Soil Type: Invalid\n");

    if(f.water == 1)
        printf("Water Availability: High\n");
    else if(f.water == 2)
        printf("Water Availability: Medium\n");
    else if(f.water == 3)
        printf("Water Availability: Low\n");
    else
        printf("Water Availability: Invalid\n");
}

void cropRecommendation()
{
    printf("\n--- Crop Recommendation ---\n");

    if(detailsEntered == 0)
    {
        printf("Please enter farmer details first!\n");
        return;
    }

    printf("Farmer Name: %s\n", f.name);

    if(f.soil == 1)
    {
        if(f.water == 1)
            printf("Recommended Crops: Cotton, Rice, Sugarcane\n");
        else if(f.water == 2)
            printf("Recommended Crops: Cotton, Maize, Soybean\n");
        else if(f.water == 3)
            printf("Recommended Crops: Millets, Chickpea\n");
        else
            printf("Invalid soil or water details\n");
    }
    else if(f.soil == 2)
    {
        if(f.water == 1)
            printf("Recommended Crops: Rice, Maize, Groundnut\n");
        else if(f.water == 2)
            printf("Recommended Crops: Groundnut, Pulses\n");
        else if(f.water == 3)
            printf("Recommended Crops: Millets, Sorghum\n");
        else
            printf("Invalid soil or water details\n");
    }
    else if(f.soil == 3)
    {
        if(f.water == 1)
            printf("Recommended Crops: Rice, Sugarcane\n");
        else if(f.water == 2)
            printf("Recommended Crops: Groundnut, Maize\n");
        else if(f.water == 3)
            printf("Recommended Crops: Millets, Pulses\n");
        else
            printf("Invalid soil or water details\n");
    }
    else
    {
        printf("Invalid soil or water details\n");
    }
}

void cropInformation()
{
    int choice;

    printf("\n--- Crop Information ---\n");
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
            printf("\nRice\n");
            printf("Season: Kharif\n");
            printf("Water Requirement: High\n");
            printf("Soil: Clayey Soil\n");
            break;

        case 2:
            printf("\nCotton\n");
            printf("Season: Kharif\n");
            printf("Water Requirement: Medium\n");
            printf("Soil: Black Soil\n");
            break;

        case 3:
            printf("\nMaize\n");
            printf("Season: Kharif and Rabi\n");
            printf("Water Requirement: Medium\n");
            printf("Soil: Well-drained Soil\n");
            break;

        case 4:
            printf("\nGroundnut\n");
            printf("Season: Kharif and Rabi\n");
            printf("Water Requirement: Medium\n");
            printf("Soil: Sandy Loam Soil\n");
            break;

        case 5:
            printf("\nWheat\n");
            printf("Season: Rabi\n");
            printf("Water Requirement: Medium\n");
            printf("Soil: Loamy Soil\n");
            break;

        case 6:
            printf("\nMillets\n");
            printf("Season: Kharif\n");
            printf("Water Requirement: Low\n");
            printf("Soil: Dry Soil\n");
            break;

        default:
            printf("Invalid choice!\n");
    }
}

void fertilizerGuide()
{
    int choice;

    printf("\n--- Fertilizer Guide ---\n");
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
            printf("Rice requires Nitrogen, Phosphorus and Potassium.\n");
            break;

        case 2:
            printf("Cotton requires Nitrogen, Phosphorus and Potassium.\n");
            break;

        case 3:
            printf("Maize requires Nitrogen, Phosphorus and Potassium.\n");
            break;

        case 4:
            printf("Groundnut requires Phosphorus and Calcium.\n");
            break;

        case 5:
            printf("Wheat requires Nitrogen, Phosphorus and Potassium.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    printf("Use fertilizers based on soil testing and local advice.\n");
}

void costEstimation()
{
    float seed, fertilizer, labour, water, total;

    printf("\n--- Crop Cost Estimation ---\n");

    if(detailsEntered == 0)
    {
        printf("Please enter farmer details first!\n");
        return;
    }

    printf("Land Area: %.2f acres\n", f.land);

    printf("Enter seed cost per acre: ");
    scanf("%f", &seed);

    printf("Enter fertilizer cost per acre: ");
    scanf("%f", &fertilizer);

    printf("Enter labour cost per acre: ");
    scanf("%f", &labour);

    printf("Enter irrigation cost per acre: ");
    scanf("%f", &water);

    total = (seed + fertilizer + labour + water) * f.land;

    printf("\n--- Cost Details ---\n");
    printf("Land Area: %.2f acres\n", f.land);
    printf("Total Seed Cost: Rs. %.2f\n", seed * f.land);
    printf("Total Fertilizer Cost: Rs. %.2f\n", fertilizer * f.land);
    printf("Total Labour Cost: Rs. %.2f\n", labour * f.land);
    printf("Total Irrigation Cost: Rs. %.2f\n", water * f.land);
    printf("Total Estimated Cost: Rs. %.2f\n", total);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== AGRICULTURE CROP MANAGEMENT SYSTEM =====\n");
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
                printf("Thank you for using the program!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 6);

    return 0;
}