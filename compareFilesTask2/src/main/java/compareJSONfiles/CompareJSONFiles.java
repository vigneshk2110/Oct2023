package compareJSONfiles;

import java.io.File;

import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.github.fge.jsonpatch.diff.JsonDiff;

public class CompareJSONFiles {

    public static void main(String[] args) throws Exception {
        ObjectMapper mapper = new ObjectMapper();

        // Read the JSON files into JsonNode objects.
        JsonNode jsonNode1 = mapper.readTree(new File("/home/adventurer/eclipse-workspace/compareFilesTask2/src/main/resources/JSON/fruitsOriginal.json"));
        JsonNode jsonNode2 = mapper.readTree(new File("/home/adventurer/eclipse-workspace/compareFilesTask2/src/main/resources/JSON/fruitsWithoutError.json"));

        // Compare the JsonNode objects.
        JsonNode diff = JsonDiff.asJson(jsonNode1, jsonNode2);

        // Print the differences between the two JSON files.
        System.out.println(diff);
    }
}
